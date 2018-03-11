using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication8
{
    struct Data
    {
        function<void()> callback;
	    volatile bool pIsRepeat;
        UInt32 frequency;
    };
    class AutoConnector
    {
        
	    private thread* pConnectingThread;
        private function<void()> callback;
	    private volatile bool isRepeat;
        private UInt32 frequency;

	/**
	 * @param c Callback to run by timer
	 * @param f Time to wait before next callback call in milliseconds
	 */
	AutoConnector(function<void()> c, uUInt32_t f);
        ~AutoConnector();
        public void start();
        public void stop();
        public bool isConnecting();
    }
}





