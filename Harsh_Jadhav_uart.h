/*
 * This is the header file containing the driver function declarations for
 * LPC2148's UART written by Harsh D. Jadhav
 */


/**
 * @brief Configures the baud rate of the UART
 *
 * @param baud : the baud rate of the UART data to be transmitted
 * valid values: 50 ...128000
 * @param clock: the input clock frequency in MHz is from the crystal clock. 
 * valid values: 1.8432MHz, 3.072MHz, 18.432MHz
 *
 * @return none
 */
void configure_baudrate (unsigned int baud, float clock);

/**
 * @brief Configures data width of the device
 *
 * @param width : the width of UART data to be transmitted 
 * valid values: 5-8 bits, 10110011, 11101
 *
 * @return none
 */
void configure_data_width (unsigned int width);

/**
 * @brief Configures the stop bit required by the UART
 *
 * @param stp_bit : Contains the stop bit required for communication
 * valid values: 1, 1.5, 2
 *
 * @return none
 */
void configure_stop_bit (float stp_bit);

/**
 * @brief Configures the Parity of data in the UART communication
 *
 * @param par : holds the parity of the data
 * valid values: even, odd, nil
 *
 * @return none
 */
void configure_parity (char par);

/**
 * @brief Configures the content of the packet
 *
 * @param pac_size : holds the size of packet
 * valid values: 64 bytes, 100bytes
 * 
 *@param width : the width of UART data to be transmitted 
 * valid values: 5-8 bits, 10110011, 11101
 * 
 * @param par : holds the parity of the data
 * valid values: even, odd, nil
 * 
 * @param stp_bit : Contains the stop bit required for communication
 * valid values: 1, 1.5, 2
 * 
 * @return none
 */
void configure_data_packet (unsigned int pac_size, width, char par, float stp_bit);

/**
 * @brief Configures the transmission of data over UART
 *
 * @param tr_data : holds the data which is to be transmitted 
 * valid values: bytes, characters
 *
 * @return integer value
 */
int transmit_data (unsigned char tr_data);

/**
 * @brief Configures the reception of data
 *
 * @param rc_data : holds the data which is received
 * valid values: bytes, characters
 *
 * @return integer value
 */
int receive_data (unsigned char rc_data);

