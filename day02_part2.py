#!/usr/bin/python3

from day01_part1 import get_lines_from_input

def line_parser(line):
    operation, sep, number = line.strip().partition(" ")
    if operation == 'forward':
        return (int(number), 0)
    elif operation == 'down':
        return (0, int(number))
    elif operation == 'up':
        return (0, -int(number))
    else:
        print("Invalid line: ", line)
        return (0,0)

def main():
    
    h, d, aim = 0, 0, 0

    for dh, daim in get_lines_from_input('input02', line_parser):
        h += dh
        aim += daim
        d += dh * aim

    print("Position is ({:d}, {:d})".format(h, d))
    print("Answer is {}".format(h * d))

if __name__ == '__main__':
	main()
