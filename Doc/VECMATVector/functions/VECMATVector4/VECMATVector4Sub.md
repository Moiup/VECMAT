[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATVector](../../VECMATVector.md)->[VECMATVector4](../../VECMATVector4.md)

# VECMATVector4Sub(\_,\_,\_)
Do the substraction of two vectors.

## **Declaration**
```C
void VECMATVector4Sub(
        VECMATVector4 v1,
        VECMATVector4 v2,
        VECMATVector4 res
    )
```


## **Parameters**
**v1**  
A vector of size 4.

**v2**  
A vector of size 4.

**res**  
The vector of size 4 where the result will be stored.

## **Result**
The substraction of `v1` by `v2` in `res`

## **How to**
If you don't want to store the result in a new vector, call the function like this :

```C
VECMATVector4Sub(v1, v2, v1);
```
or

```C
VECMATVector4Sub(v1, v2, v2);
```
