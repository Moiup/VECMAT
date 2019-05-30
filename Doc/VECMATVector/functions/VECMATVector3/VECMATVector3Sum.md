[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATVector](../../VECMATVector.md)->[VECMATVector3](../../VECMATVector3.md)

# VECMATVector4Sum(\_,\_,\_)
Do the sum of two vectors.

## **Declaration**
```C
void VECMATVector3Sum(
        VECMATVector3 v1,
        VECMATVector3 v2,
        VECMATVector3 res
    )
```


## **Parameters**
**v1**\
A vector of size 3.

**v2**\
A vector of size 3.

**res**\
The vector of size 3 where the result will be stored.

## **Result**
The sum of `v1` and `v2` in `res`

## **How to**
If you don't want to store the result in a new vector, call the function like this :
```C
VECMATVector3Sum(v1, v2, v1);
```
or
```C
VECMATVector3Sum(v1, v2, v2);
```
