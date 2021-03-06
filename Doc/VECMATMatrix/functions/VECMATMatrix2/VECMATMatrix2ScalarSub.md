[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATMatrix](../../VECMATMatrix.md)->[VECMATMatrix2](../../VECMATMatrix2.md)

# VECMATMatrix2ScalarSub(\_,\_,\_)
Substract a scalar to a matrix.

## **Declaration**
```C
void VECMATMatrix2ScalarSub(
		VECMATMatrix2 m,
		VECMATMatrix2 res,
		float r
	)
```


## **Parameters**
**m**  
A 2x2 matrix.

**r**  
The real value that will be substracted to the matrix `m`

**res**  
The resulting 2x2 matrix.


## **Result**
The 2x2 matrix `res` resulting from the substraction of `r` to `m`.

## How to
If you don't want to store the result in a new matrix, call the function like this :

```C
VECMATMatrix2ScalarSub(m, m, r);
```
