idf_component_register(
    SRCS "main.c" "control_task.c"
    INCLUDE_DIRS "."
    EMBED_TXTFILES "certs/AmazonRootCA1.pem"
                "certs/certificate.pem.crt"
                "certs/private.pem.key"
    REQUIRES demo objects
    REQUIRES driver 
    REQUIRES esp_wifi esp_http_client esp_http_server esp_event nvs_flash
)