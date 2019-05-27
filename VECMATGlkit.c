


/**
 * Crée la matrice translation
*/
void VECMATMatrix4TranslationCreate(VECMATMatrix4 m, float x, float y, float z)
{
    m[0][0] = 1;
    m[0][1] = 0;
    m[0][2] = 0;
    m[0][3] = x;

    m[1][0] = 0;
    m[1][1] = 1;
    m[1][2] = 0;
    m[1][3] = y;

    m[2][0] = 0;
    m[2][1] = 0;
    m[2][2] = 1;
    m[2][3] = z;

    m[3][0] = 0;
    m[3][1] = 0;
    m[3][2] = 0;
    m[3][3] = 1;
}

/**
 * Effectue une translation
 * 
 * res : la matrice résultant de la translation de la matrice init
*/
void VECMATMatrix4Translation(VECMATMatrix4 init, VECMATMatrix4 res, float x, float y, float z)
{
    res[0][0] = init[0][0] + init[3][0] * x;
    res[0][1] = init[0][1] + init[3][1] * x;
    res[0][2] = init[0][2] + init[3][2] * x;
    res[0][3] = init[0][3] + init[3][3] * x;

    res[1][0] = init[1][0] + init[3][0] * y;
    res[1][1] = init[1][1] + init[3][1] * y;
    res[1][2] = init[1][2] + init[3][2] * y;
    res[1][3] = init[1][3] + init[3][3] * y;

    res[2][0] = init[2][0] + init[3][0] * z;
    res[2][1] = init[2][1] + init[3][1] * z;
    res[2][2] = init[2][2] + init[3][2] * z;
    res[2][3] = init[2][3] + init[3][3] * z;

    res[3][0] = 0;
    res[3][1] = 0;
    res[3][2] = 0;
    res[3][3] = 1;
}


/**
 * La matrice de projection en perspective
 * 
 * Angle : en degré
*/
void VECMATMatrix4ProjectionPerspective(float ratio, float angle, float Znear, float Zfar, VECMATMatrix4 projection)
{
    float tanedAngle;
    float rad_angle = (angle * M_PI / 180);

    tanedAngle = tan(rad_angle / 2);

    projection[0][0] = 1.0f / (ratio * tanedAngle);
    projection[1][0] = 0.0f;
    projection[2][0] = 0.0f;
    projection[3][0] = 0.0f;

    projection[0][1] = 0.0f;
    projection[1][1] = 1 / tanedAngle;
    projection[2][1] = 0.0f;
    projection[3][1] = 0.0f;

    projection[0][2] = 0.0f;
    projection[1][2] = 0.0f;
    projection[2][2] = (Znear + Zfar) / (Znear - Zfar);
    projection[3][2] = (2 * Zfar * Znear) / (Znear - Zfar);

    projection[0][3] = 0.0f;
    projection[1][3] = 0.0f;
    projection[2][3] = -1.0f;
    projection[3][3] = 0.0f;
}


/**
 *
 * Pour des renseignements :
 * http://ogldev.atspace.co.uk/www/tutorial13/tutorial13.html
*/
void VECMATMatrix4LookAt(float Cx, float Cy, float Cz, float Tx, float Ty, float Tz, float Ux, float Uy, float Uz, VECMATMatrix4 look)
{
    vec3 f;
    vec3 l;
    vec3 u;

    vec3 up = {
        Ux, Uy, Uz
    };


    vec3CreateNormalized(Tx, Ty, Tz, Cx, Cy, Cz, f);
    vec3VecteurNormal(up, f, l);
    vec3Normalize(l);
    vec3VecteurNormal(f, l, u);
  
    look[0][0] = l[0];
    look[1][0] = l[1];
    look[2][0] = l[2];
    look[3][0] = -l[0] * Cx - l[1] * Cy - l[2] * Cz;

    look[0][1] = u[0];
    look[1][1] = u[1];
    look[2][1] = u[2];
    look[3][1] = -u[0] * Cx - u[1] * Cy - u[2] * Cz;

    look[0][2] = f[0];
    look[1][2] = f[1];
    look[2][2] = f[2];
    look[3][2] = -f[0] * Cx - f[1] * Cy - f[2] * Cz;

    look[0][3] = 0;
    look[1][3] = 0;
    look[2][3] = 0;
    look[3][3] = 1;
}
