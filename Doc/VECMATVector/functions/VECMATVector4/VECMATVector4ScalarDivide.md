[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATVector](../../VECMATVector.md)->[VECMATVector4](../../VECMATVector4.md)

# VECMATVector4ScalarDivide(\_,\_,\_)
Divide a vector by a scalar.

## **Declaration**
```C
VECMATVector4ScalarDivide(
        VECMATVector4 v,
        VECMATVector4 res,
        float r
    )
```


## **Parameters**
**v**  
A vector of size 4.

**res**  
The vector of size 4 where the result will be stored.

**r**  
The real value which will divide the vector `v`.

## **Result**
The division of the vector `v` by the real `r` stored in `res`

## **How to**
If you don't want to store the result in a new vector, call the function like this :
```C
VECMATVector4ScalarDivide(v, r, v);
```
