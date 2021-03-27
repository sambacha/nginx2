# nginx2

> source build 

> dns

```bash
DOMAIN=

curl "https://cloudflare-dns.com/dns-query?name=${DOMAIN}.com&type=A" \
  -H "accept: application/dns-json" > response.json
```
> response

```json
{
    "Status": 0,
    "TC": false,
    "RD": true,
    "RA": true,
    "AD": true,
    "CD": false,
    "Question": [{
        "name": "manifoldfinance.com",
        "type": 1
    }],
    "Answer": [{
        "name": "manifoldfinance.com",
        "type": 1,
        "TTL": 3590,
        "data": "52.203.36.44"
    }, {
        "name": "manifoldfinance.com",
        "type": 1,
        "TTL": 3590,
        "data": "167.172.136.193"
    }]
}
```
