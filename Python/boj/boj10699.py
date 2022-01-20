from datetime import datetime, tzinfo, timedelta, timezone

print((datetime.utcnow() + timedelta(hours=9)).strftime("%Y-%m-%d"))