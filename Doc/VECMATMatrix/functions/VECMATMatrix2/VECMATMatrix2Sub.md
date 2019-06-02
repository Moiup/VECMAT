[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATMatrix](../../VECMATMatrix.md)->[VECMATMatrix2](../../VECMATMatrix2.md)

# VECMATMatrix2Sub(\_,\_,\_)
Do the substraction of two matrix.

## **Declaration**
```C
void VECMATMatrix2Sub
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
The 2x2 matrix `res` resulting from the substraction of `m2` to `m1`.

## How to
If you don't want to store the result in a new matrix, call the function like this :

```C
VECMATMatrix2Sub(m1, m2, m1);
```
or

```C
VECMATMatrix2Sub(m1, m2, m2)
```
