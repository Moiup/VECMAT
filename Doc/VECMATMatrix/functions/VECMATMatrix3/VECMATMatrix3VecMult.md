[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATMatrix](../../VECMATMatrix.md)->[VECMATMatrix3](../../VECMATMatrix3.md)

# VECMATMatrix3VecMult(\_,\_,\_)
Multiply a matrix with a vector.

## **Declaration**
```C
void VECMATMatrix3VecMult()
		VECMATMatrix3 m,
		VECMATVector3 vec3,
		VECMATVector3 res
	)
```


## **Parameters**
**m**  
A 3x3 matrix.

**vec3**
A vector of degree 3.

**res**
The resulting vector of degree 3.

## **Result**
The 3 degrees' vector `res` resulting from the multoblication of `m` with `vec3`.

## How to
If you don't want to store the result in a new matrix, call the function like this:

```C
VECMATMatrix3VecMult(m, vec3, vec3);
```

