[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATVector](../../VECMATVector.md)->[VECMATVector4](../../VECMATVector4.md)

# VECMATVector4ScalarSub(\_,\_,\_)
Substract a scalar to a vector.

## **Declaration**
```C
VECMATVector4ScalarSub(
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
The real value to substract to the vector `v`.

## **Result**
The substraction of `r` to the vector `v`stored in `res`

## **How to**
If you don't want to store the result in a new vector, call the function like this :
```C
VECMATVector4ScalarSub(v, r, v);
```
