cat/etc/passwd | grep -v '\#' | sed '1!n;d' | cut -d':' -f1 | rev | sort -r |awk
