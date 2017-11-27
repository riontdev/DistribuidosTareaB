struct sumandos 
{ 
     int num; 
};

program PROGRAMA_SUMA { 
    version VERSION_SUMA { 
        int suma (sumandos) = 1; 
    } = 1; 
} = 0x20000001;