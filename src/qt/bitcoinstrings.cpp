#include <QtGlobal>
// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *bitcoin_strings[] = {
QT_TRANSLATE_NOOP("friendscoin-core", ""
"%s, you must set a rpcpassword in the configuration file:\n"
"%s\n"
"It is recommended you use the following random password:\n"
"rpcuser=friendscoinrpc\n"
"rpcpassword=%s\n"
"(you do not need to remember this password)\n"
"The username and password MUST NOT be the same.\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions.\n"
"It is also recommended to set alertnotify so you are notified of problems;\n"
"for example: alertnotify=echo %%s | mail -s \"Friendscoin Alert\" admin@foo.com\n"),
QT_TRANSLATE_NOOP("friendscoin-core", ""
"Acceptable ciphers (default: TLSv1+HIGH:!SSLv2:!aNULL:!eNULL:!AH:!3DES:"
"@STRENGTH)"),
QT_TRANSLATE_NOOP("friendscoin-core", ""
"An error occurred while setting up the RPC port %u for listening on IPv4: %s"),
QT_TRANSLATE_NOOP("friendscoin-core", ""
"An error occurred while setting up the RPC port %u for listening on IPv6, "
"falling back to IPv4: %s"),
QT_TRANSLATE_NOOP("friendscoin-core", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("friendscoin-core", ""
"Cannot obtain a lock on data directory %s. Friendscoin is probably already "
"running."),
QT_TRANSLATE_NOOP("friendscoin-core", ""
"Error: The transaction was rejected! This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("friendscoin-core", ""
"Error: This transaction requires a transaction fee of at least %s because of "
"its amount, complexity, or use of recently received funds!"),
QT_TRANSLATE_NOOP("friendscoin-core", ""
"Execute command when a relevant alert is received (%s in cmd is replaced by "
"message)"),
QT_TRANSLATE_NOOP("friendscoin-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("friendscoin-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("friendscoin-core", ""
"Listen for JSON-RPC connections on <port> (default: 9335 or testnet: 19335)"),
QT_TRANSLATE_NOOP("friendscoin-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: "
"86400)"),
QT_TRANSLATE_NOOP("friendscoin-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: "
"27000)"),
QT_TRANSLATE_NOOP("friendscoin-core", ""
"Set the number of script verification threads (up to 16, 0 = auto, <0 = "
"leave that many cores free, default: 0)"),
QT_TRANSLATE_NOOP("friendscoin-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"mining or merchant applications"),
QT_TRANSLATE_NOOP("friendscoin-core", ""
"Unable to bind to %s on this computer. Friendscoin is probably already running."),
QT_TRANSLATE_NOOP("friendscoin-core", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("friendscoin-core", ""
"Warning: Displayed transactions may not be correct! You may need to upgrade, "
"or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("friendscoin-core", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong Friendscoin will not work properly."),
QT_TRANSLATE_NOOP("friendscoin-core", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("friendscoin-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("friendscoin-core", ""
"You must set rpcpassword=<password> in the configuration file:\n"
"%s\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions."),
QT_TRANSLATE_NOOP("friendscoin-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("friendscoin-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("friendscoin-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("friendscoin-core", "Allow JSON-RPC connections from specified IP address"),
QT_TRANSLATE_NOOP("friendscoin-core", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("friendscoin-core", "Friendscoin version"),
QT_TRANSLATE_NOOP("friendscoin-core", "Block creation options:"),
QT_TRANSLATE_NOOP("friendscoin-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("friendscoin-core", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("friendscoin-core", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("friendscoin-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("friendscoin-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Connect through socks proxy"),
QT_TRANSLATE_NOOP("friendscoin-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("friendscoin-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("friendscoin-core", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("friendscoin-core", "Done loading"),
QT_TRANSLATE_NOOP("friendscoin-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("friendscoin-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("friendscoin-core", "Error loading block database"),
QT_TRANSLATE_NOOP("friendscoin-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("friendscoin-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("friendscoin-core", "Error loading wallet.dat: Wallet requires newer version of Friendscoin"),
QT_TRANSLATE_NOOP("friendscoin-core", "Error opening block database"),
QT_TRANSLATE_NOOP("friendscoin-core", "Error"),
QT_TRANSLATE_NOOP("friendscoin-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("friendscoin-core", "Error: Wallet locked, unable to create transaction!"),
QT_TRANSLATE_NOOP("friendscoin-core", "Error: system error: "),
QT_TRANSLATE_NOOP("friendscoin-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("friendscoin-core", "Failed to read block info"),
QT_TRANSLATE_NOOP("friendscoin-core", "Failed to read block"),
QT_TRANSLATE_NOOP("friendscoin-core", "Failed to sync block index"),
QT_TRANSLATE_NOOP("friendscoin-core", "Failed to write block index"),
QT_TRANSLATE_NOOP("friendscoin-core", "Failed to write block info"),
QT_TRANSLATE_NOOP("friendscoin-core", "Failed to write block"),
QT_TRANSLATE_NOOP("friendscoin-core", "Failed to write file info"),
QT_TRANSLATE_NOOP("friendscoin-core", "Failed to write to coin database"),
QT_TRANSLATE_NOOP("friendscoin-core", "Failed to write transaction index"),
QT_TRANSLATE_NOOP("friendscoin-core", "Failed to write undo data"),
QT_TRANSLATE_NOOP("friendscoin-core", "Fee per KB to add to transactions you send"),
QT_TRANSLATE_NOOP("friendscoin-core", "Find peers using DNS lookup (default: 1 unless -connect)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Generate coins (default: 0)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Get help for a command"),
QT_TRANSLATE_NOOP("friendscoin-core", "How many blocks to check at startup (default: 288, 0 = all)"),
QT_TRANSLATE_NOOP("friendscoin-core", "How thorough the block verification is (0-4, default: 3)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Imports blocks from external blk000??.dat file"),
QT_TRANSLATE_NOOP("friendscoin-core", "Information"),
QT_TRANSLATE_NOOP("friendscoin-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("friendscoin-core", "Invalid -proxy address: '%s'"),
QT_TRANSLATE_NOOP("friendscoin-core", "Invalid -tor address: '%s'"),
QT_TRANSLATE_NOOP("friendscoin-core", "Invalid amount for -minrelaytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("friendscoin-core", "Invalid amount for -mintxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("friendscoin-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("friendscoin-core", "Invalid amount"),
QT_TRANSLATE_NOOP("friendscoin-core", "List commands"),
QT_TRANSLATE_NOOP("friendscoin-core", "Listen for connections on <port> (default: 9336 or testnet: 19336)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("friendscoin-core", "Loading block index..."),
QT_TRANSLATE_NOOP("friendscoin-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("friendscoin-core", "Maintain a full transaction index (default: 0)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Maintain at most <n> connections to peers (default: 125)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: 5000)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: 1000)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("friendscoin-core", "Only accept block chain matching built-in checkpoints (default: 1)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Only connect to nodes in network <net> (IPv4, IPv6 or Tor)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Options:"),
QT_TRANSLATE_NOOP("friendscoin-core", "Output extra debugging information. Implies all other -debug* options"),
QT_TRANSLATE_NOOP("friendscoin-core", "Output extra network debugging information"),
QT_TRANSLATE_NOOP("friendscoin-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("friendscoin-core", "Prepend debug output with timestamp"),
QT_TRANSLATE_NOOP("friendscoin-core", "Rebuild block chain index from current blk000??.dat files"),
QT_TRANSLATE_NOOP("friendscoin-core", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("friendscoin-core", "Rescanning..."),
QT_TRANSLATE_NOOP("friendscoin-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("friendscoin-core", "SSL options: (see the Friendscoin Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Select the version of socks proxy to use (4-5, default: 5)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Send command to -server or friendscoind"),
QT_TRANSLATE_NOOP("friendscoin-core", "Send commands to node running on <ip> (default: 127.0.0.1)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Send trace/debug info to console instead of debug.log file"),
QT_TRANSLATE_NOOP("friendscoin-core", "Send trace/debug info to debugger"),
QT_TRANSLATE_NOOP("friendscoin-core", "Server certificate file (default: server.cert)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Server private key (default: server.pem)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Set database cache size in megabytes (default: 25)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Set key pool size to <n> (default: 100)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Set maximum block size in bytes (default: 250000)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Set minimum block size in bytes (default: 0)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Set the number of threads to service RPC calls (default: 4)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("friendscoin-core", "Specify configuration file (default: friendscoin.conf)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Specify connection timeout in milliseconds (default: 5000)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Specify data directory"),
QT_TRANSLATE_NOOP("friendscoin-core", "Specify pid file (default: friendscoind.pid)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("friendscoin-core", "System error: "),
QT_TRANSLATE_NOOP("friendscoin-core", "This help message"),
QT_TRANSLATE_NOOP("friendscoin-core", "Threshold for disconnecting misbehaving peers (default: 100)"),
QT_TRANSLATE_NOOP("friendscoin-core", "To use the %s option"),
QT_TRANSLATE_NOOP("friendscoin-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("friendscoin-core", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("friendscoin-core", "Transaction too large"),
QT_TRANSLATE_NOOP("friendscoin-core", "Unable to bind to %s on this computer (bind returned error %d, %s)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Unknown -socks proxy version requested: %i"),
QT_TRANSLATE_NOOP("friendscoin-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("friendscoin-core", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("friendscoin-core", "Usage:"),
QT_TRANSLATE_NOOP("friendscoin-core", "Use OpenSSL (https) for JSON-RPC connections"),
QT_TRANSLATE_NOOP("friendscoin-core", "Use UPnP to map the listening port (default: 0)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Use proxy to reach tor hidden services (default: same as -proxy)"),
QT_TRANSLATE_NOOP("friendscoin-core", "Use the test network"),
QT_TRANSLATE_NOOP("friendscoin-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("friendscoin-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("friendscoin-core", "Verifying wallet..."),
QT_TRANSLATE_NOOP("friendscoin-core", "Wallet needed to be rewritten: restart Friendscoin to complete"),
QT_TRANSLATE_NOOP("friendscoin-core", "Warning"),
QT_TRANSLATE_NOOP("friendscoin-core", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("friendscoin-core", "You need to rebuild the databases using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("friendscoin-core", "wallet.dat corrupt, salvage failed"),
};