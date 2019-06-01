[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATVector](../../VECMATVector.md)->[VECMATVector2](../../VECMATVector2.md)

# VECMATVector2ScalarDivide(\_,\_,\_)
Divide a vector by a scalar.

## **Declaration**
```C
VECMATVector2ScalarDivide(
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
The real value which will divide the vector `v`.

## **Result**
The division of the vector `v` by the real `r` stored in `res`

## **How to**
If you don't want to store the result in a new vector, call the function like this :
```C
VECMATVector2ScalarDivide(v, r, v);
```
