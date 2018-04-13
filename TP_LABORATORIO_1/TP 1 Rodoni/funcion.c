float sumar ( float x, float y)
    {
        float resultado;
        resultado = x + y;
        return resultado;
    }
float restar (float x, float y)
    {
        float resultado;
         resultado = x - y;
        return resultado;
    }
float dividir (float x, float y)
{    if(y !=0)
    {
    float resultado;
    resultado = x / y;
    return resultado;
    }
    else
    {
        return 0.0;
    }
}
float multiplicar (float x, float y)
    {
        float resultado;
        resultado = x * y;
        return resultado;
    }
float factorial (float x)
{
    if(x>0)
    {
        float resultado = 1;
        float fact;
        for(fact = x; fact > 1; fact--)
        {
            resultado = resultado * fact;
        }
         return resultado;
    }
    else
    {
        return 0;
    }
}



