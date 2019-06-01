[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATMatrix](../../VECMATMatrix.md)->[VECMATMatrix4](../../VECMATMatrix4.md)

# VECMATMatrix4Sub(\_,\_,\_)
Do the substraction of two matrix.

## **Declaration**
```C
void VECMATMatrix4Sub
		VECMATMatrix4 m1,
		VECMATMatrix4 m2,
		VECMATMatrix4 res
	)
```


## **Parameters**
**m1**  
A 4x4 matrix.

**m2**  
A 4x4 matrix.

**res**  
The resulting 4x4 matrix.


## **Result**
The 4x4 matrix `res` resulting from the substraction of `m2` to `m1`.

## How to
If you don't want to store the result in a new matrix, call the function like this :

```C
VECMATMatrix4Sub(m1, m2, m1);
```
or

```C
VECMATMatrix4Sub(m1, m2, m2)
```
