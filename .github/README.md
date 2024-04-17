# Recache
Generates a random cache_id for every session that connects to your server.
This ensures that the client has a new cache.

This is used for development servers to save closing the client and clearing cache.

## Issues
- There's a 1 in 4,294,967,295 chance that the cache is not cleared.
