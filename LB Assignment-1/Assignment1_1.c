using System;
using NLog;

namespace YourNamespace
{
    class Program
    {
        private static readonly Logger Logger = LogManager.GetCurrentClassLogger();

        static void Main(string[] args)
        {
            Logger.Info("Application started");

            // Simulate application running
            for (int i = 0; i < 24; i++)
            {
                Logger.Info($"Logging info for hour {i}");
                System.Threading.Thread.Sleep(1000); // Sleep to simulate time passing
            }

            Logger.Info("Application ended");
            LogManager.Shutdown();
        }
    }
}
