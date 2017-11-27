struct sumandos 
{ 
     int num; 
};

program PROGRAMA_SUMA { 
    version VERSION_SUMA { 
        string suma (sumandos) = 1; 
    } = 1; 
} = 0x20000001;