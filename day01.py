#!/usr/bin/python3

def get_lines_from_input(filename, parser = None):
	if parser == None:
		parser = lambda l : int(l)
	with open(filename, 'r') as f:
		line = f.readline()
		while line:
			yield parser(line)
			line = f.readline()

def main():
	prev_depth 	= None
	counter 	= 0

	for depth in get_lines_from_input('input01'):
		if ((prev_depth is not None) and (prev_depth < depth)):
			counter += 1
		prev_depth = depth

	print("Answer is {}".format(counter))


if __name__ == '__main__':
	main()
