#ifndef imu_an_spatial_TYPES_HPP
#define imu_an_spatial_TYPES_HPP

/* If you need to define types specific to your oroGen components, define them
 * here. Required headers must be included explicitly
 *
 * However, it is common that you will only import types from your library, in
 * which case you do not need this file
 */

namespace imu_an_spatial {
    /*struct NtripConfig    //Was not possible to import types in .orogen
    {
        const char server;
        const char port;
        const char user;
        const char password;
        const char data;
        const char serdevice;
        const int baud;
        char nmea;

        int bitrate;
        char proxyhost;
        char proxyport;
        int mode;
        int initudp;
        int udpport;
        
        NtripConfig()
        :   server('www.openservice-sapos.niedersachsen.de'),
            port('2101'),
            user('ni_DFKIRIC2'),
            password('aJi1-4o24'),
            nmea('GPGGA,092221.913,5306.730,N,00851.493,E,1,12,1.0,0.0,M,0.0,M,,*69'), 
            data('VRS_3_2G_NI'), 
            serdevice('/home/sherpa-tt/Development/ade_dev/install/ttyGPS'),
            baud('115200'),
            bitrate('0'),
            proxyhost('0'),
            proxyport('2101'),
            mode('4'),
            initudp('0'),
            udpport('0')
        {}
    };*/
}

#endif

