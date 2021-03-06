[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATVector](../../VECMATVector.md)->[VECMATVector3](../../VECMATVector3.md)

# VECMATVector3ScalarSum(\_,\_,\_)
Add a scalar to a vector.

## **Declaration**
```C
VECMATVector3ScalarSum(
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
The real value to add to the vector `v`.

## **Result**
The sum of `r` to the vector `v`stored in `res`

## **How to**
If you don't want to store the result in a new vector, call the function like this :
```C
VECMATVector3ScalarSum(v, r, v);
```
