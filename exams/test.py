"""Extract and save the data about the person from the CSV file."""

import csv
import sys
from typing import List

from rapidfuzz import fuzz

from objectprocessor import approach, person

FUZZY_MATCH_THRESHOLD = 90

# look at the entire data set inside of the inputs/people.txt
# you may need to create and use different data sets, depending
#       on the experiments that you must conduct to answer your RQs


def extract_person_data(file_path: str) -> List[person.Person]:
    """Extract person data from the given CSV file."""
    data_list = []
    number_columns = 5
    with open(file_path, mode="r", encoding="utf-8") as file:
        reader = csv.reader(file)
        for row in reader:
            if len(row) >= number_columns:
                new_person = person.Person(
                    name=row[0],
                    country=row[1],
                    phone_number=row[2],
                    job=row[3],
                    email=row[4],
                )
                data_list.append(new_person)

    return data_list

    # refer to the file called input/people.txt to learn more about
    # the format of the comma separated value (CSV) file that we must parse;
    # iterate through each line of the file and extract all relevant details
    # use the csv.reader to accomplish the task of parsing the CSV file
    # --> extract each of the attributes about a person from the line variable
    # --> construct a new instance of the Person class that contains all
    # of the attributes that were extracted from the CSV file
    # --> append the current instance of the person class to the data_list variable
    # return the list of all of the specified column


def write_person_data(
    file_name: str, person_data: List[person.Person]
) -> None:
    """Write the person data stored in a list to the specified file."""
    # create an empty list that will store the person data as a list of strings
    converted_person_data = []

    for p in person_data:
        converted_person_data.append(
            [p.name, p.country, str(p.phone_number), p.job, p.email]
        )

    with open(file_name, mode="a", newline="") as file:
        writer = csv.writer(file)
        writer.writerows(converted_person_data)

    # : iterate through every person inside of the person_data list
    # --> create a list out of this person where each of the person's
    # attributes are stored inside of an index in the list
    # --> append this converted person list to the list called converted_person_data
    # --> use the csv.writer approach and the writerows function to write out
    # the list of lists of strings that contain all of the person data


def find_matching_people(
    attribute: str,
    match: str,
    person_data: List[person.Person],
    find_approach: approach.SearchApproach = approach.SearchApproach.containment,
) -> List[person.Person]:
    """Find people who have matching data for a specified attribute."""
    matching_people_list = []
    for p in person_data:
        if is_matching_person(attribute, match, p, find_approach):
            matching_people_list.append(p)
    return matching_people_list
    # : iterate through all of the people in the person_data list
    # --> the current person has an attribute that contains the search term in match
    # --> add the current person to the matching_person_list
    # return the matching_person_list


def is_matching_person(
    attribute: str,
    match: str,
    search_person: person.Person,
    find_approach: approach.SearchApproach,
) -> bool:
    """Dispatch function to determine if the person matches based on the search approach."""
    function_name = f"is_matching_person_{find_approach.name.lower()}"
    # Dynamically retrieve the function from the current module
    function = getattr(sys.modules[__name__], function_name, None)
    if function is None:
        available_functions = [func for func in dir(sys.modules[__name__]) if func.startswith("is_matching_person_")]
        raise ValueError(f"Invalid search approach: {find_approach}. Available functions: {available_functions}")
    return function(attribute, match, search_person)

    # : use the attr approach to build up a function call based on
    # --> : The string that is stored inside of the find_approach variable;
    # make sure that it is calling the function in this module.
    # Use one of the two standard, non-fuzzy functions
    # --> : Call the function that was built up and return its result
    # Call the general-purpose fuzzy matching function


def is_matching_person_containment(
    attr: str,
    match: str,
    search_person: person.Person,
) -> bool:
    """Use containment to determine if the person's specified attribute contains the search term in match."""
    if attr == person.person_attributes[0]:
        if match == search_person.name:
            return True
    elif attr == person.person_attributes[1]:
        if match == search_person.country:
            return True
    elif attr == person.person_attributes[2]:
        if match == search_person.phone_number:
            return True
    elif attr == person.person_attributes[3]:
        if match == search_person.job:
            return True
    elif attr == person.person_attributes[4]:
        if match == search_person.email:
            return True
    return False
    # : determine which attribute was provided and then
    # use the containment checking approach to determine
    # if there is an appropriate match


def is_matching_person_equality(
    attr: str,
    match: str,
    search_person: person.Person,
) -> bool:
    """Use equality to determine if the person's specified attribute contains the search term in match."""
    if attr == person.person_attributes[0]:
        if match == search_person.name:
            return True
    elif attr == person.person_attributes[1]:
        if match == search_person.country:
            return True
    elif attr == person.person_attributes[2]:
        if match == search_person.phone_number:
            return True
    elif attr == person.person_attributes[3]:
        if match == search_person.job:
            return True
    elif attr == person.person_attributes[4]:
        if match == search_person.email:
            return True
    return False

    # : determine which attribute was provided and then
    # use the containment checking approach to determine
    # if there is an appropriate match


def is_matching_person_fuzzy(
    attr: str,
    match: str,
    search_person: person.Person,
    find_approach: approach.SearchApproach,
) -> bool:
    """Use fuzzy matching to determine if the person's specified attribute matches the search term in match."""
    rappid_fuz = getattr(fuzz, f"{find_approach}")
    if (
        attr == person.person_attributes[0]
    ):  # compare with the corresponding attribute in the list
        if rappid_fuz(match, search_person.name) > FUZZY_MATCH_THRESHOLD:
            return True
    elif attr == person.person_attributes[1]:
        if rappid_fuz(match, search_person.country) > FUZZY_MATCH_THRESHOLD:
            return True
    elif attr == person.person_attributes[2]:
        if (
            rappid_fuz(match, search_person.phone_number)
            > FUZZY_MATCH_THRESHOLD
        ):
            return True
    elif attr == person.person_attributes[3]:
        if rappid_fuz(match, search_person.job) > FUZZY_MATCH_THRESHOLD:
            return True
    elif attr == person.person_attributes[4]:
        if rappid_fuz(match, search_person.email) > FUZZY_MATCH_THRESHOLD:
            return True
    return False