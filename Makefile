obj = obj
src = src

objects_list = main.o vec3.o

objects = $(addprefix $(obj)/,$(objects_list))


all: prog

prog: $(objects)
	g++ $(objects) -o prog

$(obj)/main.o: main.cpp
	g++ -o $(obj)/main.o -c main.cpp

$(obj)/vec3.o: $(src)/vec3.cpp
	g++ -o $(obj)/vec3.o -c $(src)/vec3.cpp

clean_obj:
	rm $(obj)/*.o
