[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATMatrix](../../VECMATMatrix.md)->[VECMATMatrix3](../../VECMATMatrix3.md)

# VECMATMatrix3Sub(\_,\_,\_)
Do the sum of two matrices.

## **Declaration**
```C
void VECMATMatrix3Sum
		VECMATMatrix3 m1,
		VECMATMatrix3 m2,
		VECMATMatrix3 res
	)
```


## **Parameters**
**m1**  
A 3x3 matrix.

**m2**  
A 3x3 matrix.

**res**  
The resulting 3x3 matrix.


## **Result**
The 3x3 matrix `res` resulting from the sum of `m2` to `m1`.

## How to
If you don't want to store the result in a new matrix, call the function like this :

```C
VECMATMatrix3Sum(m1, m2, m1);
```
or

```C
VECMATMatrix3Sum(m1, m2, m2)
```
