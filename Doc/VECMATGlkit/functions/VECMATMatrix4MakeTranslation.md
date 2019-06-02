[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATGlkit](../VECMATGlkit.md)

# VECMATMatrix4MakeTranslation(\_,\_,\_,\_)
Translate an existing 4x4 matrix.

## **Declaration**
```C
void VECMATMatrix4MakeTranslation(
		VECMATMatrix4 init,
		VECMATMatrix4 res,
		float tx,
		float ty,
		float tz
	)
```


## **Parameters**
**init**  
A 4x4 matrix.

**res**  
A 4x4 matrix.

**tx**  
The X translation value.

**ty**  
The Y translation value.

**tz**  
The Z translation value.

## **Result**
The `res` matrix resulting from the translation of `init`.

## **How to**
If you don't want to store the result in a new matrix, call the function like this :

```C
VECMATMatrix4MakeTranslation(m, m, tx, ty, tz);
```