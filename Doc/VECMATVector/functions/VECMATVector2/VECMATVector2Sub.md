[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATVector](../../VECMATVector.md)->[VECMATVector2](../../VECMATVector2.md)

# VECMATVector2Sub(\_,\_,\_)
Do the substraction of two vectors.

## **Declaration**
```C
void VECMATVector2Sub(
        VECMATVector2 v1,
        VECMATVector2 v2,
        VECMATVector2 res
    )
```


## **Parameters**
**v1**\
A vector of size 2.

**v2**\
A vector of size 2.

**res**\
The vector of size 2 where the result will be stored.

## **Result**
The substraction of `v1` by `v2` in `res`

## **How to**
If you don't want to store the result in a new vector, call the function like this :
```C
VECMATVector2Sub(v1, v2, v1);
```
or
```C
VECMATVector2Sub(v1, v2, v2);
```
