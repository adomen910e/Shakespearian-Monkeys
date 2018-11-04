# Makefile

# make test = compilation + affichage des tests
# make afficher =  affichage des tests
# make main = compilation des jeux
# make clean = suppression executable dossier
# make valgrind = utilisation valgrind
main:
	@echo "\n COMPILATION BASE"
	@make -C base base


test:
	@echo "\n COMPILATION TEST BASE"
	@make -C base test-1


afficher:
	./base/test-1


clean:
	@echo "\nCLEAN BASE"
	@make -C base clean

