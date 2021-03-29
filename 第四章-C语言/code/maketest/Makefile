CC=gcc
SUBDIRS = f1\
		  f2\
		  main\
		  obj
OBJS=f1.o f2.o main.o
BIN=myapp
OBJS_DIR=obj
BIN_DIR=bin
CFLAGS=-c -Wall -I ../include
export CC OBJS BIN OBJS_DIR BIN_DIR CFLAGS

all: CHECK_DIR $(SUBDIRS)
CHECK_DIR:
	mkdir -p $(BIN_DIR)
$(SUBDIRS):ECHO
	make -C $@
ECHO:
	@echo $(SUBDIRS)
	@echo begin comple
CLEAN:
	@$(RM) $(OBJS)/*.o
	@rm -rf $(BIN_DIR)

