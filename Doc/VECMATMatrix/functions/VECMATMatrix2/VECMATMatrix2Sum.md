[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATMatrix](../../VECMATMatrix.md)->[VECMATMatrix2](../../VECMATMatrix2.md)

# VECMATMatrix2Sub(\_,\_,\_)
Do the sum of two matrices.

## **Declaration**
```C
void VECMATMatrix2Sum
		VECMATMatrix2 m1,
		VECMATMatrix2 m2,
		VECMATMatrix2 res
	)
```


## **Parameters**
**m1**  
A 2x2 matrix.

**m2**  
A 2x2 matrix.

**res**  
The resulting 2x2 matrix.


## **Result**
The 2x2 matrix `res` resulting from the sum of `m2` to `m1`.

## How to
If you don't want to store the result in a new matrix, call the function like this :

```C
VECMATMatrix2Sum(m1, m2, m1);
```
or

```C
VECMATMatrix2Sum(m1, m2, m2)
```
