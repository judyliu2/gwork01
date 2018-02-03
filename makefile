all:
	python picmaker.py
run: all

clean:
	rm pic.ppm
	rm *~
