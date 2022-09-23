Hash table is a form of data structure in C programming. It comes inform of key and value. Eg. key: Ike , value: Phone number.
It is processed/accessed as an array where the key is used to access the index of a particular location in the array.Hence, we use the hash function(H) to access the index. Hash function is any function that can be used to map data of arbitrary size to fixed-size values.
Eg. H(Ike) -> 2
H(4) -> 3
H(Adam) -> 1
where H is the hash function, Ike, 4 and Adam are the keys and 2, 3 and 1 are the resulting indices.
Example:
We are giving a table/array size of 8 and we are asked to put 28 in one of the arrays.
Solution:
To go about this we need to make use of the modulo(%) operator.
first of all,
table size or simply size = 8
the value = 28
index(key) = ?
key = value % size
    = 28 % 8
    = 4
This means that the value 28 will be placed at index 4 of the array size 8

There can be cases where two or more values will have/be in the same index. this means that the two values have collided and will result in what is called CHAINED HASH TABLE. The indice or keys of chained elements can be accesed easily using linked list.
Empty slot/position on a hash table is called BUCKET.
0x1A-hash_tables
