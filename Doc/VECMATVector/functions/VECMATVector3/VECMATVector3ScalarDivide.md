[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATVector](../../VECMATVector.md)->[VECMATVector3](../../VECMATVector3.md)

# VECMATVector4ScalarDivide(\_,\_,\_)
Divide a vector by a scalar.

## **Declaration**
```C
VECMATVector3ScalarDivide(
        VECMATVector3 v,
        VECMATVector3 res,
        float r
    )
```


## **Parameters**
**v**  
A vector of size 3.

**res**  
The vector of size 3 where the result will be stored.

**r**  
The real value which will divide the vector `v`.

## **Result**
The division of the vector `v` by the real `r` stored in `res`

## **How to**
If you don't want to store the result in a new vector, call the function like this :
```C
VECMATVector3ScalarDivide(v, r, v);
```
