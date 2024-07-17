using System;
using NLog;

class Program
{
    private static readonly Logger logger = LogManager.GetCurrentClassLogger();

    static void Main(string[] args)
    {
        // Example log messages
        logger.Info("This is an info log message.");
        logger.Warn("This is a warning log message.");
        logger.Error("This is an error log message.");

        Console.WriteLine("Logging complete. Check the log file for messages.");
    }
}
