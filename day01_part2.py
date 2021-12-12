#!/usr/bin/python3

from day01_part1 import get_lines_from_input

def main():
    lines       = get_lines_from_input('input01')
    counter 	= 0

    try:
        prev_three  = (next(lines), next(lines), next(lines))
    except StopIteration:
        print("Less then 3 measuraments")
        return

    for depth in lines:
        if (depth > prev_three[0]):
            counter += 1
        prev_three = (prev_three[1], prev_three[2], depth)

    print("Answer is {}".format(counter))

if __name__ == '__main__':
	main()
