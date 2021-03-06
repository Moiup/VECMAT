[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATVector](../../VECMATVector.md)->[VECMATVector2](../../VECMATVector2.md)

# VECMATVector2ScalarMult(\_,\_,\_)
Multiply a vector by a scalar.

## **Declaration**
```C
VECMATVector2ScalarMult(
        VECMATVector2 v,
        VECMATVector2 res,
        float r
    )
```


## **Parameters**
**v**  
A vector of size 2.

**res**  
The vector of size 2 where the result will be stored.

**r**  
The real value which will multiply the vector `v`.

## **Result**
The multiplication of the vector `v` by the real `r` stored in `res`

## **How to**
If you don't want to store the result in a new vector, call the function like this :
```C
VECMATVector2ScalarMult(v, r, v);
```
