using System;
using System.Threading;
struct Data
{
    function<void()> callback;
	volatile bool pIsRepeat;
    UInt32 frequency;
};

class AutoConnector
{
    
	private Thread pConnectingThread;
    private function<void()> callback;
	private volatile bool isRepeat;
    private UInt32 frequency;

   	/**
	 * @param c Callback to run by timer
	 * @param f Time to wait before next callback call in milliseconds
	 */
	public AutoConnector(std::function<void()> c, UInt32 f);
    public ~AutoConnector();
    public void start();
    public void stop();
    public bool isConnecting();
};