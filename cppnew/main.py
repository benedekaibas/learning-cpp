"""
You are given two non-empty linked lists representing two non-negative integers. 
The digits are stored in reverse order, and each of their nodes contains a single digit. 
Add the two numbers and return the sum as a linked list.
"""


def main():
    list_one = list(input('Enter three numbers: '))
    list_two = list(input('Etner three numbers: '))
    print(f"{list_one}\n{list_two}")

    number = 0 

    for  number in list_one:
        number = int(''.join(map(str, list_one)))
        print(number)
        break

if __name__ == "__main__":
    main()