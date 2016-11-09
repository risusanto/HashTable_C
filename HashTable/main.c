#include "hashtable.h"

void main() {
	HashTable table_mhs;
	init(&table_mhs,1520000);
	put(&table_mhs, 1520001, "Dwiki");
	put(&table_mhs, 1520010, "Dhiya");
	put(&table_mhs, 1520018, "jodi");
	put(&table_mhs, 1520030, "Irsyad");
	printf("%s\n", get(&table_mhs, 1520001));
	printf("%s\n", get(&table_mhs, 1520010));
	printf("%s\n", get(&table_mhs, 1520018));
	printf("%s\n", get(&table_mhs, 1520030));

}