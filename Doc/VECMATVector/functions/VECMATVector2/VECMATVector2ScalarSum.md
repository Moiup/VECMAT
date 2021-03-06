[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATVector](../../VECMATVector.md)->[VECMATVector2](../../VECMATVector2.md)

# VECMATVector2ScalarSum(\_,\_,\_)
Add a scalar to a vector.

## **Declaration**
```C
VECMATVector2ScalarSum(
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
The real value to add to the vector `v`.

## **Result**
The sum of `r` to the vector `v`stored in `res`

## **How to**
If you don't want to store the result in a new vector, call the function like this :
```C
VECMATVector2ScalarSum(v, r, v);
```
