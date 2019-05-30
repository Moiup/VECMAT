[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATVector](../../VECMATVector.md)->[VECMATVector3](../../VECMATVector3.md)

# VECMATVector3Sub(\_,\_,\_)
Do the substraction of two vectors.

## **Declaration**
```C
void VECMATVector3Sub(
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
The substraction of `v1` by `v2` in `res`

## **How to**
If you don't want to store the result in a new vector, call the function like this :
```C
VECMATVector3Sub(v1, v2, v1);
```
or
```C
VECMATVector3Sub(v1, v2, v2);
```
