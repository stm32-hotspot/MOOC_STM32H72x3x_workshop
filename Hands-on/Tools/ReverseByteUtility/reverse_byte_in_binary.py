#!/usr/bin/env python
import csv
from sys import argv
import os.path
import binascii

def patch_file(filename_in,filename_out):
	"""
	Patches binary file with patches
	:param filename: file name
	:param patches: tuple or list
	of tuples, lists or dicts of patches
	"""
	print("Byte reversing started...")
	try:
		print("Inputfile :",filename_in)
		print("Outputfile:",filename_out)
		with open(filename_in, 'r+b') as f_in:
				with open(filename_out, 'wb') as f_out:
					while True:
						chunk = f_in.read(16)
						if not chunk:
							break
						remaining = len(chunk) % 16
						if remaining:
							chunk += bytes(16 - remaining)
							print("Padding to be aligned on 128bits done.")
						chunk_reversed = chunk[::-1]
						f_out.write(chunk_reversed)
		print("Byte reversing finished...")
	except Exception as e:
		print("Error while Byte reversing:", e)


def main():

	patch_file(fileNameIn,fileNameOut)

fileNameIn=None
fileNameOut=None

if __name__ == '__main__':
	try:
		fileNameIn=argv[1]
		fileNameOut=argv[2]
		pass
	except Exception as e:
		print("You must provide a valid filename as parameter")
		raise
main()