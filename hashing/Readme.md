### Hashing

- Hashing is a technique to convert a key into a address of in memory.
- It is used to store data in associative manner.
- It uses a hash function to compute an index into an array in which an element
  will be inserted or searched.
- Hashing is used in Sets, Maps, Dictionaries, etc.
- Collisions are a major problem in hashing, they occur when two different keys
  hash to the same index.
- There are two techniques to handle collisions:
  - Chaining: In this technique, a linked list is used to store the collided
    elements.
  - Open Addressing: In this technique, the collided elements are stored in the
    next available slot in the array.

---

### methods of Hashing

1. Divison method arr[i]%10 -- linearchaining
