[Main menu](../../../Readme.md)->[Doc](../../VECMATKit.md)->[VECMATGlkit](../VECMATGlkit.md)

# VECMATMatrix4ProjectionOrtho(\_,\_,\_,\_,\_)
Create the 4x4 perspective projection matrix.

## **Declaration**
```C
void VECMATMatrix4ProjectionPerspective(
		float ratio,
		float angle,
		float Znear,
		float Zfar,
		VECMATMatrix4 projection
	)
```


## **Parameters**
[info](https://www.khronos.org/registry/OpenGL-Refpages/gl2.1/xhtml/gluPerspective.xml)

**ratio**  
Specifies the aspect ratio that determines the field of view in the x direction. The aspect ratio is the ratio of x (width) to y (height).

**angle**  
Specifies the field of view angle, in radian, in the y direction.

**Znear**  
Specifies the distance from the viewer to the near clipping plane (always positive).

**Zfar**  
Specifies the distance from the viewer to the far clipping plane (always positive).

**projection**  
A 4x4 matrix.

## **Result**
The 4x4 orhtographic projection matrix in `projection`
