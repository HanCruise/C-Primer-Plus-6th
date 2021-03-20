// ckpol = 0; ckpha = 0
uint8 SPI_Master_W_R_Byte(uint8 byte_out)
{
    uint8 index;
    uint8 byte_in = 0;

    SCK = 0;
    for (index = 0; index < 8; index++)
    {
        SCK = 0;
        if (byte_out & 0x80)
        {
            MOSI = 1;
        }
        else
        {
            MOSI = 0;
        }
        SCK = 1;
        byte_out <<= 1;

        byte_in <<= 1;
        if (MISO)
        {
            byte_in |= 1;
        }
    }
    SCK = 0;

    return byte_in;
}

// ckpol = 0; ckpha = 1
uint8 SPI_Master_W_R_Byte(uint8 byte_out)
{
    uint8 index;
    uint8 byte_in = 0;

    SCK = 0;
    for (index = 0; index < 8; index++)
    {
        SCK = 1;
        if (byte_out & 0x80)
        {
            MOSI = 1;
        }
        else
        {
            MOSI = 0;
        }
        SCK = 0;
        byte_out <<= 1;

        byte_in <<= 1;
        if (MISO)
        {
            byte_in |= 1;
        }
    }
    SCK = 0;

    return byte_in;
}

// ckpol = 1; ckpha = 0
uint8 SPI_Master_W_R_Byte(uint8 byte_out)
{
    uint8 index;
    uint8 byte_in = 0;

    SCK = 1;
    for (index = 0; index < 8; index++)
    {
        SCK = 0;
        if (byte_out & 0x80)
        {
            MOSI = 1;
        }
        else
        {
            MOSI = 0;
        }
        SCK = 1;
        byte_out <<= 1;

        byte_in <<= 1;
        if (MISO)
        {
            byte_in |= 1;
        }
    }
    SCK = 1;

    return byte_in;
}

// ckpol = 1; ckpha = 1
uint8 SPI_Master_W_R_Byte(uint8 byte_out)
{
    uint8 index;
    uint8 byte_in = 0;

    SCK = 1;
    for (index = 0; index < 8; index++)
    {
        SCK = 1;
        if (byte_out & 0x80)
        {
            MOSI = 1;
        }
        else
        {
            MOSI = 0;
        }
        SCK = 0;
        byte_out <<= 1;

        byte_in <<= 1;
        if (MISO)
        {
            byte_in |= 1;
        }
    }
    SCK = 1;

    return byte_in;
}