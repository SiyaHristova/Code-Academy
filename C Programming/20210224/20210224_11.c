/* Ако имеме дефинирано макро
#define М
кои от по долните дефиниции ще пропаднат:
а) #if M
b) #ifdef M
c) #ifndef M
d) #if defined(M)
e) #if !defined(M) 
    ще пропаднат #ifndef M и #if !defined(M) -> ще върнат 0, защото макросът е дефиниран