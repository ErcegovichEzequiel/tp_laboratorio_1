#include <stdio.h>
#include <stdlib.h>
/** \brief valida si un entero esta dentro del rango 1 y 5.
 *
 * \param validar que sea mayor o igual que 1
 * \param validar que sea menor o igual que 5
 * \return un entero
 *
 */

int validarRango(int x, int inf, int sup)
{
    int esvalido=0;
    if ((x>=inf) && (x<=sup))
    {
      esvalido=1;
    }
return esvalido;
}
/** \brief  Suma 2 enteros.
 *
 * \param Suma 2 valores.
 * \param
 * \return Un entero.
 *
 */
   float sumaDeDosEnteros (float x, float y)
   {
        float rta;
        rta= x + y;
        return rta;

   }
/** \brief  Resta 2 enteros.
 *
 * \param Resta 2 valoress.
 * \param
 * \return
 *
 */
   float restaDeDosEnteros (float x, float y)
   {
       float rta;
       rta= x-y;
       return rta;
   }
   /** \brief Divide 2 enteros.
    *
    * \param Divide 2 valores.
    * \param
    * \return
    *
    */
   float divicionDeDosEnteros (float x, float y)
   {
       float rta;
       rta=(float)x/y;
       return rta;
   }
   /** \brief Multiplica 2 enteros.
    *
    * \param Multiplica 2 valores.
    * \param
    * \return
    *
    */
   float multiplicacionDeDosEnteros (float x, float y)
   {
       float rta;
       rta=x*y;
       return rta;
   }
/** \brief Factorea un entero.
 *
 * \param Factorea un valor.
 * \param
 * \return
 *
 */
long factorialDeUnEntero (float x)
{
    float rta;
    if (x==0)
    {
        rta=1;
    }
    else
        rta=x*factorialDeUnEntero(x-1);
    return rta;
}
