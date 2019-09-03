{
    "shell_cmd": "gcc -std=c99 \"${file}\" -o \"${file_path}/${file_base_name}\"",
    "file_regex": "^(..[^:]*):([0-9]+):?([0-9]+)?:? (.*)$",
    "working_dir": "${file_path}",
    "selector": "source.c",

    "variants":
    [
        {
            "name": "Run",
           "shell_cmd": "gcc $file_name -o ${file_base_name} && ${file_path}/${file_base_name}"
        }
    ]
}
