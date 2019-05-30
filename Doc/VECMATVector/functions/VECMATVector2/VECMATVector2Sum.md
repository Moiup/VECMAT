[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATVector](../../VECMATVector.md)->[VECMATVector2](../../VECMATVector2.md)

# VECMATVector2Sum(\_,\_,\_)
Do the sum of two vectors.

## **Declaration**
```C
void VECMATVector2Sum(
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
The sum of `v1` and `v2` in `res`

## **How to**
If you don't want to store the result in a new vector, call the function like this :
```C
VECMATVector2Sum(v1, v2, v1);
```
or
```C
VECMATVector2Sum(v1, v2, v2);
```
