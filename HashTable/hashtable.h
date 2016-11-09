#pragma once
#include <stdlib.h>
#include <stdio.h>

typedef struct _hashtable {
	long int hash_key;
	int capacity;
	long int key;
	char* data;
	struct _hashtable* hashArray[40];
}HashTable;

void put(HashTable* h,long int key, char* data);
char* get(HashTable* h,long int key);
void init(HashTable* h, long int hash_key);
int isFull(HashTable* h);

int isFull(HashTable* h) {
	if (h->capacity == 40)
		return 1;
	return 0;
}

void init(HashTable* h, long int hash_key) {
	h->hash_key = hash_key;
	h->capacity = 0;
}

void put(HashTable* h,long int key, char* data) {
	int hashIndex;
	HashTable* mhs;
	mhs = (HashTable *)malloc(sizeof(HashTable));
	mhs->key = key;
	mhs->data = data;
	if (isFull == 0) {
		hashIndex = key % h->hash_key;
		h->hashArray[hashIndex] = mhs;
		h->capacity++;
	}
	else
		printf("Penuh!\n");

}
char* get(HashTable* h, long int key) {
	int hashIndex;
	hashIndex = key % h->hash_key;
	return h->hashArray[hashIndex]->data;
}